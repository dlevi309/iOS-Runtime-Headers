/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
*/

#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/SSLoggable.h>

@class NSString, NSArray;

@interface SSHarvestedApplicationMetadata : NSObject <BSXPCCoding, SSLoggable> {

	BOOL _canGenerateDocument;
	NSString* _userActivityTitle;
	NSArray* _contentRects;

}

@property (nonatomic,copy) NSString * userActivityTitle;                    //@synthesize userActivityTitle=_userActivityTitle - In the implementation block
@property (nonatomic,copy) NSArray * contentRects;                          //@synthesize contentRects=_contentRects - In the implementation block
@property (assign,nonatomic) BOOL canGenerateDocument;                      //@synthesize canGenerateDocument=_canGenerateDocument - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * loggableDescription; 
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(NSArray *)contentRects;
-(NSString *)userActivityTitle;
-(NSString *)loggableDescription;
-(void)setUserActivityTitle:(NSString *)arg1 ;
-(void)setContentRects:(NSArray *)arg1 ;
-(BOOL)canGenerateDocument;
-(void)setCanGenerateDocument:(BOOL)arg1 ;
@end

