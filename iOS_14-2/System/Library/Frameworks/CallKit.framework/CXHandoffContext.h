/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSDictionary *)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(BOOL)isOutgoing;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDictionary *)context;
-(void)setOutgoing:(BOOL)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setContext:(NSDictionary *)arg1 ;
-(NSString *)handoffIdentifier;
-(CXHandle *)remoteHandle;
-(id)initWithHandoffIdentifier:(id)arg1 ;
-(BOOL)isEqualToHandoffContext:(id)arg1 ;
-(void)setRemoteHandle:(CXHandle *)arg1 ;
@end

