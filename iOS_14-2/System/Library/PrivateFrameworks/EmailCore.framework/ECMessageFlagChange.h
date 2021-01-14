/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
*/

#import <EmailCore/EmailCore-Structs.h>
#import <libobjc.A.dylib/ECMessageFlagChangeBuilder.h>
#import <libobjc.A.dylib/EFPubliclyDescribable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface ECMessageFlagChange : NSObject <ECMessageFlagChangeBuilder, EFPubliclyDescribable, NSCopying, NSSecureCoding> {

	BOOL _read;
	BOOL _deleted;
	BOOL _replied;
	BOOL _flagged;
	BOOL _draft;
	BOOL _forwarded;
	BOOL _redirected;
	BOOL _junkLevelSetByUser;
	BOOL _readChanged;
	BOOL _deletedChanged;
	BOOL _repliedChanged;
	BOOL _flaggedChanged;
	BOOL _draftChanged;
	BOOL _forwardedChanged;
	BOOL _redirectedChanged;
	BOOL _junkLevelSetByUserChanged;
	BOOL _junkLevelChanged;
	BOOL _flagColorChanged;
	unsigned long long _junkLevel;
	unsigned long long _flagColor;
	long long _reason;

}

@property (assign,nonatomic) BOOL read;                                           //@synthesize read=_read - In the implementation block
@property (assign,nonatomic) BOOL deleted;                                        //@synthesize deleted=_deleted - In the implementation block
@property (assign,nonatomic) BOOL replied;                                        //@synthesize replied=_replied - In the implementation block
@property (assign,nonatomic) BOOL flagged;                                        //@synthesize flagged=_flagged - In the implementation block
@property (assign,nonatomic) BOOL draft;                                          //@synthesize draft=_draft - In the implementation block
@property (assign,nonatomic) BOOL forwarded;                                      //@synthesize forwarded=_forwarded - In the implementation block
@property (assign,nonatomic) BOOL redirected;                                     //@synthesize redirected=_redirected - In the implementation block
@property (assign,nonatomic) BOOL junkLevelSetByUser;                             //@synthesize junkLevelSetByUser=_junkLevelSetByUser - In the implementation block
@property (assign,nonatomic) unsigned long long junkLevel;                        //@synthesize junkLevel=_junkLevel - In the implementation block
@property (assign,nonatomic) unsigned long long flagColor;                        //@synthesize flagColor=_flagColor - In the implementation block
@property (assign,nonatomic) long long reason;                                    //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) BOOL readChanged;                                    //@synthesize readChanged=_readChanged - In the implementation block
@property (assign,nonatomic) BOOL deletedChanged;                                 //@synthesize deletedChanged=_deletedChanged - In the implementation block
@property (assign,nonatomic) BOOL repliedChanged;                                 //@synthesize repliedChanged=_repliedChanged - In the implementation block
@property (assign,nonatomic) BOOL flaggedChanged;                                 //@synthesize flaggedChanged=_flaggedChanged - In the implementation block
@property (assign,nonatomic) BOOL draftChanged;                                   //@synthesize draftChanged=_draftChanged - In the implementation block
@property (assign,nonatomic) BOOL forwardedChanged;                               //@synthesize forwardedChanged=_forwardedChanged - In the implementation block
@property (assign,nonatomic) BOOL redirectedChanged;                              //@synthesize redirectedChanged=_redirectedChanged - In the implementation block
@property (assign,nonatomic) BOOL junkLevelSetByUserChanged;                      //@synthesize junkLevelSetByUserChanged=_junkLevelSetByUserChanged - In the implementation block
@property (assign,nonatomic) BOOL junkLevelChanged;                               //@synthesize junkLevelChanged=_junkLevelChanged - In the implementation block
@property (assign,nonatomic) BOOL flagColorChanged;                               //@synthesize flagColorChanged=_flagColorChanged - In the implementation block
@property (nonatomic,readonly) BOOL hasChanges; 
@property (nonatomic,copy,readonly) NSString * ef_publicDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)changeFrom:(id)arg1 to:(id)arg2 ;
+(id)setRead;
+(id)clearRead;
+(id)clearFlagged;
+(id)setFlagged;
+(id)setReplied;
+(id)setForwarded;
+(id)setDeleted;
-(BOOL)draft;
-(NSString *)ef_publicDescription;
-(BOOL)flagged;
-(void)setFlagged:(BOOL)arg1 ;
-(BOOL)read;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)deleted;
-(void)setDraft:(BOOL)arg1 ;
-(BOOL)replied;
-(unsigned long long)flagColor;
-(NSString *)description;
-(BOOL)forwarded;
-(BOOL)redirected;
-(void)setReplied:(BOOL)arg1 ;
-(void)setFlagColor:(unsigned long long)arg1 ;
-(void)setForwarded:(BOOL)arg1 ;
-(void)setRedirected:(BOOL)arg1 ;
-(void)setJunkLevel:(unsigned long long)arg1 ;
-(unsigned long long)junkLevel;
-(void)changesReadTo:(BOOL)arg1 ;
-(void)changesDeletedTo:(BOOL)arg1 ;
-(void)changesRepliedTo:(BOOL)arg1 ;
-(void)changesFlaggedTo:(BOOL)arg1 ;
-(void)changesFlagColorTo:(unsigned long long)arg1 ;
-(void)changesForwardedTo:(BOOL)arg1 ;
-(void)changesRedirectedTo:(BOOL)arg1 ;
-(void)changesJunkLevelTo:(unsigned long long)arg1 ;
-(BOOL)readChanged;
-(BOOL)draftChanged;
-(BOOL)deletedChanged;
-(BOOL)repliedChanged;
-(BOOL)flaggedChanged;
-(BOOL)flagColorChanged;
-(BOOL)forwardedChanged;
-(BOOL)redirectedChanged;
-(BOOL)junkLevelChanged;
-(long long)reason;
-(BOOL)hasChanges;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithBuilder:(/*^block*/id)arg1 ;
-(void)setDeleted:(BOOL)arg1 ;
-(BOOL)junkLevelSetByUser;
-(void)setJunkLevelSetByUser:(BOOL)arg1 ;
-(id)flagsAfterChangingFlags:(id)arg1 flagsWereChanged:(BOOL*)arg2 ;
-(void)setReason:(long long)arg1 ;
-(void)setRead:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)junkLevelSetByUserChanged;
-(void)changesDraftTo:(BOOL)arg1 ;
-(void)changesJunkLevelSetByUserTo:(BOOL)arg1 ;
-(void)setReadChanged:(BOOL)arg1 ;
-(void)setDeletedChanged:(BOOL)arg1 ;
-(void)setRepliedChanged:(BOOL)arg1 ;
-(void)setFlaggedChanged:(BOOL)arg1 ;
-(void)setDraftChanged:(BOOL)arg1 ;
-(void)setForwardedChanged:(BOOL)arg1 ;
-(void)setRedirectedChanged:(BOOL)arg1 ;
-(void)setJunkLevelSetByUserChanged:(BOOL)arg1 ;
-(void)setJunkLevelChanged:(BOOL)arg1 ;
-(void)setFlagColorChanged:(BOOL)arg1 ;
@end

