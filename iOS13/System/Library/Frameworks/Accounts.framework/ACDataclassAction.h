/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
*/

#import <libobjc.A.dylib/ACProtobufCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString;

@interface ACDataclassAction : NSObject <ACProtobufCoding, NSSecureCoding> {

	BOOL _isDestructive;
	long long _type;
	NSArray* _affectedContainers;

}

@property (getter=_isError,readonly) BOOL _error; 
@property (nonatomic,readonly) long long type;                            //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL isDestructive;                        //@synthesize isDestructive=_isDestructive - In the implementation block
@property (nonatomic,readonly) NSArray * affectedContainers;              //@synthesize affectedContainers=_affectedContainers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)actionWithType:(long long)arg1 ;
+(id)destructiveActionWithType:(long long)arg1 ;
+(id)destructiveActionWithType:(long long)arg1 affectedContainers:(id)arg2 ;
+(id)_actionForError:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_initWithProtobuf:(id)arg1 ;
-(id)_encodeProtobuf;
-(id)_initWithProtobufData:(id)arg1 ;
-(id)_encodeProtobufData;
-(NSArray *)affectedContainers;
-(id)initWithType:(long long)arg1 destructivity:(BOOL)arg2 affectedContainers:(id)arg3 ;
-(BOOL)_isError;
-(BOOL)isDestructive;
@end

