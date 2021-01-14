/*
* Generated on Thursday, January 14, 2021 at 2:24:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/


@protocol NSObject;
@class NSString;

@interface NMSObfuscatableDescriptionItem : NSObject {

	BOOL _obfuscated;
	NSString* _format;
	id<NSObject> _value;

}

@property (nonatomic,retain) NSString * format;               //@synthesize format=_format - In the implementation block
@property (nonatomic,retain) id<NSObject> value;              //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) BOOL obfuscated;                 //@synthesize obfuscated=_obfuscated - In the implementation block
-(void)setFormat:(NSString *)arg1 ;
-(NSString *)format;
-(void)setValue:(id<NSObject>)arg1 ;
-(id<NSObject>)value;
-(id)initWithFormat:(id)arg1 value:(id)arg2 obfuscated:(BOOL)arg3 ;
-(BOOL)obfuscated;
-(void)setObfuscated:(BOOL)arg1 ;
@end

