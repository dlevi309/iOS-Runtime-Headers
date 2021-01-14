/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PKDiffHunk : NSObject <NSSecureCoding> {

	NSString* _key;
	id _oldValue;
	id _newValue;
	NSString* _message;

}

@property (nonatomic,retain) NSString * key;                  //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) id valueOld;                     //@synthesize oldValue=_oldValue - In the implementation block
@property (nonatomic,retain) id valueNew;                     //@synthesize newValue=_newValue - In the implementation block
@property (nonatomic,retain) NSString * message;              //@synthesize message=_message - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)hunkWithKey:(id)arg1 oldValue:(id)arg2 newValue:(id)arg3 message:(id)arg4 ;
-(void)setMessage:(NSString *)arg1 ;
-(long long)compare:(id)arg1 ;
-(NSString *)message;
-(void)encodeWithCoder:(id)arg1 ;
-(id)valueOld;
-(id)valueNew;
-(void)setValueOld:(id)arg1 ;
-(void)setValueNew:(id)arg1 ;
-(BOOL)isEqualToDiffHunk:(id)arg1 ;
-(NSString *)key;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

