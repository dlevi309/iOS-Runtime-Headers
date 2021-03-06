/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
*/


@class NSString;

@interface AXAssertionWorkItem : NSObject {

	BOOL _acquire;
	NSString* _type;
	NSString* _identifier;
	unsigned long long _retries;

}

@property (nonatomic,readonly) NSString * type;                       //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL acquire;                          //@synthesize acquire=_acquire - In the implementation block
@property (assign,nonatomic) unsigned long long retries;              //@synthesize retries=_retries - In the implementation block
-(void)setRetries:(unsigned long long)arg1 ;
-(BOOL)acquire;
-(NSString *)type;
-(id)initWithType:(id)arg1 identifier:(id)arg2 isAcquisition:(BOOL)arg3 ;
-(unsigned long long)retries;
-(NSString *)identifier;
@end

