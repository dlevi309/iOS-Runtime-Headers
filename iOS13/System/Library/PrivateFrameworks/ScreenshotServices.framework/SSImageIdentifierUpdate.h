/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
*/

#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/SSLoggable.h>

@class NSString, BSSettings;

@interface SSImageIdentifierUpdate : NSObject <BSXPCCoding, SSLoggable> {

	NSString* _imageIdentifier;
	NSString* _environmentDescriptionIdentifier;

}

@property (nonatomic,copy) NSString * imageIdentifier;                               //@synthesize imageIdentifier=_imageIdentifier - In the implementation block
@property (nonatomic,copy) NSString * environmentDescriptionIdentifier;              //@synthesize environmentDescriptionIdentifier=_environmentDescriptionIdentifier - In the implementation block
@property (nonatomic,readonly) BSSettings * bsSettings; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * loggableDescription; 
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(NSString *)imageIdentifier;
-(NSString *)loggableDescription;
-(NSString *)environmentDescriptionIdentifier;
-(BSSettings *)bsSettings;
-(void)setImageIdentifier:(NSString *)arg1 ;
-(void)setEnvironmentDescriptionIdentifier:(NSString *)arg1 ;
@end

