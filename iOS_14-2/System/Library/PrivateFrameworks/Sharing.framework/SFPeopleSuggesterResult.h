/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface SFPeopleSuggesterResult : NSObject <NSSecureCoding> {

	unsigned _flags;
	NSString* _contactID;
	NSArray* _handles;
	NSString* _sendersKnownAlias;

}

@property (nonatomic,copy) NSString * contactID;                      //@synthesize contactID=_contactID - In the implementation block
@property (assign,nonatomic) unsigned flags;                          //@synthesize flags=_flags - In the implementation block
@property (nonatomic,copy) NSArray * handles;                         //@synthesize handles=_handles - In the implementation block
@property (nonatomic,copy) NSString * sendersKnownAlias;              //@synthesize sendersKnownAlias=_sendersKnownAlias - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setHandles:(NSArray *)arg1 ;
-(NSArray *)handles;
-(NSString *)contactID;
-(void)setSendersKnownAlias:(NSString *)arg1 ;
-(unsigned)flags;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setFlags:(unsigned)arg1 ;
-(void)setContactID:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)sendersKnownAlias;
@end

