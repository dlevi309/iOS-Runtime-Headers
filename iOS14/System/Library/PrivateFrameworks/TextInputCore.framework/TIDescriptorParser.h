/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


@class NSMutableDictionary;

@interface TIDescriptorParser : NSObject {

	long long _errorCode;
	NSMutableDictionary* _context;

}

@property (nonatomic,readonly) long long errorCode;                        //@synthesize errorCode=_errorCode - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * context;              //@synthesize context=_context - In the implementation block
-(id)initWithErrorCode:(long long)arg1 ;
-(long long)errorCode;
-(NSMutableDictionary *)context;
-(id)parseStringForKey:(id)arg1 fromConfig:(id)arg2 required:(BOOL)arg3 errors:(id)arg4 ;
-(id)parseIntegerForKey:(id)arg1 fromConfig:(id)arg2 required:(BOOL)arg3 errors:(id)arg4 ;
-(id)parseFloatForKey:(id)arg1 fromConfig:(id)arg2 required:(BOOL)arg3 errors:(id)arg4 ;
-(id)parseNumberForKey:(id)arg1 fromConfig:(id)arg2 required:(BOOL)arg3 errors:(id)arg4 ;
-(id)parseBooleanForKey:(id)arg1 fromConfig:(id)arg2 required:(BOOL)arg3 errors:(id)arg4 ;
-(id)parseArrayForKey:(id)arg1 fromConfig:(id)arg2 required:(BOOL)arg3 errors:(id)arg4 ;
-(id)parseDictionaryForKey:(id)arg1 fromConfig:(id)arg2 required:(BOOL)arg3 errors:(id)arg4 ;
-(id)parseObjectForKey:(id)arg1 fromConfig:(id)arg2 required:(BOOL)arg3 errors:(id)arg4 validate:(/*^block*/id)arg5 ;
-(id)missingValueErrorForKey:(id)arg1 ;
-(id)invalidValueErrorForKey:(id)arg1 withValue:(id)arg2 ;
-(id)invalidDataTypeErrorForKey:(id)arg1 withValue:(id)arg2 dataType:(id)arg3 ;
-(id)errorWithMessage:(id)arg1 ;
-(id)errorWithMessage:(id)arg1 andValue:(id)arg2 ;
-(id)errorWithDetails:(id)arg1 ;
-(id)boxNilForValue:(id)arg1 ;
@end

