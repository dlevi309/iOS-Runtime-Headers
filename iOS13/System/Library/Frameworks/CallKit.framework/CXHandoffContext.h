/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, CXHandle, NSDictionary;

@interface CXHandoffContext : NSObject <NSSecureCoding> {

	BOOL _outgoing;
	NSString* _handoffIdentifier;
	CXHandle* _remoteHandle;
	NSDictionary* _context;

}

@property (nonatomic,copy,readonly) NSString * handoffIdentifier;                         //@synthesize handoffIdentifier=_handoffIdentifier - In the implementation block
@property (assign,getter=isOutgoing,nonatomic) BOOL outgoing;                             //@synthesize outgoing=_outgoing - In the implementation block
@property (nonatomic,copy) CXHandle * remoteHandle;                                       //@synthesize remoteHandle=_remoteHandle - In the implementation block
@property (nonatomic,copy) NSDictionary * context;                                        //@synthesize context=_context - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dictionaryRepresentation; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(NSDictionary *)context;
-(void)setContext:(NSDictionary *)arg1 ;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(BOOL)isOutgoing;
-(void)setOutgoing:(BOOL)arg1 ;
-(NSString *)handoffIdentifier;
-(CXHandle *)remoteHandle;
-(id)initWithHandoffIdentifier:(id)arg1 ;
-(BOOL)isEqualToHandoffContext:(id)arg1 ;
-(void)setRemoteHandle:(CXHandle *)arg1 ;
@end

