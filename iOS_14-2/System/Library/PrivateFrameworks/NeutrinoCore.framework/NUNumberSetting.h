/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NUSetting.h>

@class NSNumber;

@interface NUNumberSetting : NUSetting {

	NSNumber* _minimumValue;
	NSNumber* _maximumValue;
	NSNumber* _ui_minimumValue;
	NSNumber* _ui_maximumValue;

}

@property (readonly) NSNumber * minimumValue;                 //@synthesize minimumValue=_minimumValue - In the implementation block
@property (readonly) NSNumber * maximumValue;                 //@synthesize maximumValue=_maximumValue - In the implementation block
@property (readonly) NSNumber * ui_minimumValue;              //@synthesize ui_minimumValue=_ui_minimumValue - In the implementation block
@property (readonly) NSNumber * ui_maximumValue;              //@synthesize ui_maximumValue=_ui_maximumValue - In the implementation block
@property (readonly) NSNumber * defaultValue; 
@property (readonly) NSNumber * identityValue; 
+(id)deserializeFromDictionary:(id)arg1 error:(out id*)arg2 ;
-(NSNumber *)maximumValue;
-(BOOL)validate:(id)arg1 error:(out id*)arg2 ;
-(id)init;
-(NSNumber *)defaultValue;
-(id)initWithAttributes:(id)arg1 ;
-(id)description;
-(NSNumber *)identityValue;
-(BOOL)isValid:(out id*)arg1 ;
-(NSNumber *)ui_maximumValue;
-(NSNumber *)ui_minimumValue;
-(NSNumber *)minimumValue;
-(BOOL)validateNumber:(id)arg1 error:(out id*)arg2 ;
-(BOOL)serializeIntoDictionary:(id)arg1 error:(out id*)arg2 ;
-(id)initWithMinimum:(id)arg1 maximum:(id)arg2 attributes:(id)arg3 ;
-(id)initWithMinimum:(id)arg1 maximum:(id)arg2 uiMinimum:(id)arg3 uiMaximum:(id)arg4 attributes:(id)arg5 ;
@end

