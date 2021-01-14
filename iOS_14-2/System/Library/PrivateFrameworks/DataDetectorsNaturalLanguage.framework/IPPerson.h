/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsNaturalLanguage.framework/DataDetectorsNaturalLanguage
*/


@class NSString;

@interface IPPerson : NSObject {

	NSString* _fullName;
	NSString* _handle;
	NSString* _ABUUID;
	NSString* _handleType;

}

@property (readonly) NSString * fullName;                          //@synthesize fullName=_fullName - In the implementation block
@property (readonly) NSString * handle;                            //@synthesize handle=_handle - In the implementation block
@property (readonly) NSString * handleType;                        //@synthesize handleType=_handleType - In the implementation block
@property (readonly) NSString * email; 
@property (retain) NSString * ABUUID;                              //@synthesize ABUUID=_ABUUID - In the implementation block
@property (copy,readonly) NSString * displayableName; 
-(id)initWithString:(id)arg1 ;
-(NSString *)fullName;
-(NSString *)handle;
-(id)init;
-(NSString *)handleType;
-(NSString *)ABUUID;
-(id)initWithHandle:(id)arg1 handleType:(id)arg2 fullName:(id)arg3 ;
-(NSString *)email;
-(id)initWithEmail:(id)arg1 fullName:(id)arg2 ;
-(NSString *)displayableName;
-(void)setABUUID:(NSString *)arg1 ;
@end

