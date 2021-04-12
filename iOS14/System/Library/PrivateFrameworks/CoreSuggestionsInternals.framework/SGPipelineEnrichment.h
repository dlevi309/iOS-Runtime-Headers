/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
#import <CoreSuggestionsInternals/SGEntity.h>

@class NSData;

@interface SGPipelineEnrichment : SGEntity {

	BOOL _pendingGeocode;
	NSData* _contentHash;

}

@property (nonatomic,retain) NSData * contentHash;              //@synthesize contentHash=_contentHash - In the implementation block
@property (assign,nonatomic) BOOL pendingGeocode;               //@synthesize pendingGeocode=_pendingGeocode - In the implementation block
+(id)address:(id)arg1 forIdentity:(id)arg2 parent:(id)arg3 curated:(BOOL)arg4 context:(id)arg5 contextRangeOfInterest:(NSRange)arg6 extractionInfo:(id)arg7 ;
+(id)phoneNumber:(id)arg1 forIdentity:(id)arg2 parent:(id)arg3 curated:(BOOL)arg4 context:(id)arg5 contextRangeOfInterest:(NSRange)arg6 extractionInfo:(id)arg7 ;
+(id)emailAddress:(id)arg1 forIdentity:(id)arg2 parent:(id)arg3 curated:(BOOL)arg4 context:(id)arg5 contextRangeOfInterest:(NSRange)arg6 extractionInfo:(id)arg7 ;
+(id)birthday:(id)arg1 forIdentity:(id)arg2 parent:(id)arg3 curated:(BOOL)arg4 context:(id)arg5 contextRangeOfInterest:(NSRange)arg6 extractionInfo:(id)arg7 ;
+(id)instantMessageAddress:(id)arg1 forIdentity:(id)arg2 parent:(id)arg3 curated:(BOOL)arg4 context:(id)arg5 contextRangeOfInterest:(NSRange)arg6 extractionInfo:(id)arg7 ;
+(id)socialProfile:(id)arg1 forIdentity:(id)arg2 parent:(id)arg3 curated:(BOOL)arg4 context:(id)arg5 contextRangeOfInterest:(NSRange)arg6 extractionInfo:(id)arg7 ;
-(BOOL)isEvent;
-(NSData *)contentHash;
-(void)setCreationTimestamp:(SGUnixTimestamp_)arg1 ;
-(id)initWithDuplicateKey:(id)arg1 title:(id)arg2 parent:(id)arg3 ;
-(BOOL)pendingGeocode;
-(id)initWithPseudoContactWithKey:(id)arg1 parent:(id)arg2 name:(id)arg3 ;
-(BOOL)isPerson;
-(void)setLastModifiedTimestamp:(SGUnixTimestamp_)arg1 ;
-(id)initWithContactDetailWithKey:(id)arg1 type:(unsigned long long)arg2 extractionInfo:(id)arg3 curated:(BOOL)arg4 parent:(id)arg5 value:(id)arg6 context:(id)arg7 contextRangeOfInterest:(NSRange)arg8 ;
-(id)toCloudKitRecordWithId:(id)arg1 parentEntityType:(long long)arg2 ;
-(void)setContentHash:(NSData *)arg1 ;
-(id)loggingIdentifier;
-(void)setPendingGeocode:(BOOL)arg1 ;
-(id)initWithIntentPersonAtDate:(id)arg1 bundleId:(id)arg2 handle:(id)arg3 displayName:(id)arg4 ;
@end

