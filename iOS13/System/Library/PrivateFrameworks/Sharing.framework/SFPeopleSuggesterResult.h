/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)flags;
-(NSString *)contactID;
-(NSArray *)handles;
-(void)setFlags:(unsigned)arg1 ;
-(void)setHandles:(NSArray *)arg1 ;
-(void)setContactID:(NSString *)arg1 ;
-(NSString *)sendersKnownAlias;
-(void)setSendersKnownAlias:(NSString *)arg1 ;
@end

