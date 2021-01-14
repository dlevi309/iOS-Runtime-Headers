/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
*/

#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/SSLoggable.h>

@class NSString, NSArray;

@interface SSEnvironmentElementMetadata : NSObject <BSXPCCoding, SSLoggable> {

	NSString* _userActivityTitle;
	NSArray* _rectsInElement;

}

@property (setter=setUserActivityTitle:,nonatomic,copy) NSString * userActivityTitle;              //@synthesize userActivityTitle=_userActivityTitle - In the implementation block
@property (nonatomic,copy) NSArray * rectsInElement;                                               //@synthesize rectsInElement=_rectsInElement - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * loggableDescription; 
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(NSString *)loggableDescription;
-(NSString *)userActivityTitle;
-(void)setUserActivityTitle:(NSString *)arg1 ;
-(NSArray *)rectsInElement;
-(id)_encodableRects;
-(id)_decodedRectsForEncodedRects:(id)arg1 ;
-(void)setRectsInElement:(NSArray *)arg1 ;
@end

