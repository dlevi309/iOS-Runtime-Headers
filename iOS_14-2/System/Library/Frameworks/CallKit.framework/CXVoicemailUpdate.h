/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
*/

#import <CallKit/CallKit-Structs.h>
#import <libobjc.A.dylib/CXCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, CXHandle, NSDate, NSURL, NSString;

@interface CXVoicemailUpdate : NSObject <CXCopying, NSSecureCoding, NSCopying> {

	BOOL _played;
	BOOL _trashed;
	CXVoicemailUpdateHasSet _hasSet;
	NSUUID* _voicemailUUID;
	CXHandle* _sender;
	NSDate* _dateReceived;
	NSURL* _audioFileURL;
	NSUUID* _UUID;

}

@property (assign,nonatomic) CXVoicemailUpdateHasSet hasSet;              //@synthesize hasSet=_hasSet - In the implementation block
@property (nonatomic,copy) NSUUID * UUID;                                 //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * voicemailUUID;               //@synthesize voicemailUUID=_voicemailUUID - In the implementation block
@property (nonatomic,copy) CXHandle * sender;                             //@synthesize sender=_sender - In the implementation block
@property (nonatomic,copy) NSDate * dateReceived;                         //@synthesize dateReceived=_dateReceived - In the implementation block
@property (nonatomic,copy) NSURL * audioFileURL;                          //@synthesize audioFileURL=_audioFileURL - In the implementation block
@property (assign,getter=isPlayed,nonatomic) BOOL played;                 //@synthesize played=_played - In the implementation block
@property (assign,getter=isTrashed,nonatomic) BOOL trashed;               //@synthesize trashed=_trashed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(CXHandle *)sender;
-(NSUUID *)UUID;
-(void)setSender:(CXHandle *)arg1 ;
-(void)setTrashed:(BOOL)arg1 ;
-(BOOL)isTrashed;
-(BOOL)isPlayed;
-(void)encodeWithCoder:(id)arg1 ;
-(CXVoicemailUpdateHasSet)hasSet;
-(void)setDateReceived:(NSDate *)arg1 ;
-(NSString *)description;
-(void)setAudioFileURL:(NSURL *)arg1 ;
-(NSURL *)audioFileURL;
-(id)initWithCoder:(id)arg1 ;
-(void)setPlayed:(BOOL)arg1 ;
-(void)setUUID:(NSUUID *)arg1 ;
-(NSDate *)dateReceived;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithVoicemailUUID:(id)arg1 ;
-(void)updateSanitizedCopy:(id)arg1 withZone:(NSZone*)arg2 ;
-(void)updateCopy:(id)arg1 withZone:(NSZone*)arg2 ;
-(id)sanitizedCopyWithZone:(NSZone*)arg1 ;
-(id)sanitizedCopy;
-(NSUUID *)voicemailUUID;
-(void)setHasSet:(CXVoicemailUpdateHasSet)arg1 ;
@end

