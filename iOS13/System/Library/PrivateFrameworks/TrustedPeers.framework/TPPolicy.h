/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrustedPeers.framework/TrustedPeers
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class TPPolicyVersion, NSArray, NSDictionary;

@interface TPPolicy : NSObject <NSSecureCoding> {

	BOOL _unknownRedactions;
	TPPolicyVersion* _version;
	NSArray* _modelToCategory;
	NSDictionary* _categoriesByView;
	NSDictionary* _introducersByCategory;
	NSArray* _keyViewMapping;

}

@property (nonatomic,retain) TPPolicyVersion * version;                         //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) NSArray * modelToCategory;                         //@synthesize modelToCategory=_modelToCategory - In the implementation block
@property (nonatomic,retain) NSDictionary * categoriesByView;                   //@synthesize categoriesByView=_categoriesByView - In the implementation block
@property (nonatomic,retain) NSDictionary * introducersByCategory;              //@synthesize introducersByCategory=_introducersByCategory - In the implementation block
@property (nonatomic,retain) NSArray * keyViewMapping;                          //@synthesize keyViewMapping=_keyViewMapping - In the implementation block
@property (assign) BOOL unknownRedactions;                                      //@synthesize unknownRedactions=_unknownRedactions - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)policyWithModelToCategory:(id)arg1 categoriesByView:(id)arg2 introducersByCategory:(id)arg3 keyViewMapping:(id)arg4 unknownRedactions:(BOOL)arg5 version:(id)arg6 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(TPPolicyVersion *)version;
-(void)setVersion:(TPPolicyVersion *)arg1 ;
-(id)categoryForModel:(id)arg1 ;
-(BOOL)trustedPeerInCategory:(id)arg1 canIntroduceCategory:(id)arg2 ;
-(BOOL)peerInCategory:(id)arg1 canAccessView:(id)arg2 ;
-(id)viewsForModel:(id)arg1 error:(id*)arg2 ;
-(id)mapKeyToView:(id)arg1 ;
-(NSArray *)modelToCategory;
-(void)setModelToCategory:(NSArray *)arg1 ;
-(NSDictionary *)categoriesByView;
-(void)setCategoriesByView:(NSDictionary *)arg1 ;
-(NSDictionary *)introducersByCategory;
-(void)setIntroducersByCategory:(NSDictionary *)arg1 ;
-(NSArray *)keyViewMapping;
-(void)setKeyViewMapping:(NSArray *)arg1 ;
-(BOOL)unknownRedactions;
-(void)setUnknownRedactions:(BOOL)arg1 ;
@end

