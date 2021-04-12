/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface CXCallDirectoryStoreExtension : NSObject <NSSecureCoding> {

	NSString* _identifier;
	long long _primaryKey;
	long long _priority;
	long long _state;
	NSDate* _stateLastModified;

}

@property (nonatomic,copy) NSString * identifier;                     //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) long long primaryKey;                    //@synthesize primaryKey=_primaryKey - In the implementation block
@property (assign,nonatomic) long long priority;                      //@synthesize priority=_priority - In the implementation block
@property (assign,nonatomic) long long state;                         //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSDate * stateLastModified;              //@synthesize stateLastModified=_stateLastModified - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)primaryKey;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setState:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)state;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(void)setPrimaryKey:(long long)arg1 ;
-(void)setStateLastModified:(NSDate *)arg1 ;
-(NSDate *)stateLastModified;
@end

