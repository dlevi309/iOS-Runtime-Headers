/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
*/

#import <libobjc.A.dylib/ACProtobufCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString;

@interface ACDataclassAction : NSObject <ACProtobufCoding, NSSecureCoding> {

	BOOL _isDestructive;
	long long _type;
	NSArray* _affectedContainers;
	NSString* _undoAlertTitle;
	NSString* _undoAlertMessage;

}

@property (getter=_isError,readonly) BOOL _error; 
@property (nonatomic,readonly) long long type;                            //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL isDestructive;                        //@synthesize isDestructive=_isDestructive - In the implementation block
@property (nonatomic,readonly) NSArray * affectedContainers;              //@synthesize affectedContainers=_affectedContainers - In the implementation block
@property (nonatomic,retain) NSString * undoAlertTitle;                   //@synthesize undoAlertTitle=_undoAlertTitle - In the implementation block
@property (nonatomic,retain) NSString * undoAlertMessage;                 //@synthesize undoAlertMessage=_undoAlertMessage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_actionForError:(id)arg1 ;
+(id)destructiveActionWithType:(long long)arg1 affectedContainers:(id)arg2 ;
+(id)destructiveActionWithType:(long long)arg1 ;
+(id)actionWithType:(long long)arg1 ;
-(id)_encodeProtobuf;
-(BOOL)_isError;
-(BOOL)isDestructive;
-(id)initWithType:(long long)arg1 destructivity:(BOOL)arg2 affectedContainers:(id)arg3 ;
-(id)_initWithProtobuf:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_encodeProtobufData;
-(NSString *)undoAlertTitle;
-(void)setUndoAlertMessage:(NSString *)arg1 ;
-(NSString *)undoAlertMessage;
-(id)_initWithProtobufData:(id)arg1 ;
-(NSString *)description;
-(void)setUndoAlertTitle:(NSString *)arg1 ;
-(NSArray *)affectedContainers;
-(long long)type;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

