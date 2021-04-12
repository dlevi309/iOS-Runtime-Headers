/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/


@class NSNumber;

@interface CoreMLVersion : NSObject {

	NSNumber* _frameworkVersionNumber;

}

@property (nonatomic,copy) NSNumber * frameworkVersionNumber;              //@synthesize frameworkVersionNumber=_frameworkVersionNumber - In the implementation block
+(id)getInternalFrameworkVersion;
-(NSNumber *)frameworkVersionNumber;
-(void)setFrameworkVersionNumber:(NSNumber *)arg1 ;
-(id)init;
@end

