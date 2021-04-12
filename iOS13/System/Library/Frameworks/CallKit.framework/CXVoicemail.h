/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
*/

#import <CallKit/CallKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, CXHandle, NSDate, NSURL;

@interface CXVoicemail : NSObject <NSSecureCoding> {

	BOOL _played;
	BOOL _trashed;
	NSUUID* _UUID;
	CXHandle* _sender;
	NSDate* _dateReceived;
	NSURL* _audioFileURL;

}

@property (nonatomic,copy,readonly) NSUUID * UUID;                       //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,copy) CXHandle * sender;                            //@synthesize sender=_sender - In the implementation block
@property (nonatomic,copy) NSDate * dateReceived;                        //@synthesize dateReceived=_dateReceived - In the implementation block
@property (nonatomic,copy) NSURL * audioFileURL;                         //@synthesize audioFileURL=_audioFileURL - In the implementation block
@property (assign,getter=isPlayed,nonatomic) BOOL played;                //@synthesize played=_played - In the implementation block
@property (assign,getter=isTrashed,nonatomic) BOOL trashed;              //@synthesize trashed=_trashed - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)UUID;
-(CXHandle *)sender;
-(void)setSender:(CXHandle *)arg1 ;
-(id)initWithUUID:(id)arg1 ;
-(BOOL)isTrashed;
-(BOOL)isPlayed;
-(void)setAudioFileURL:(NSURL *)arg1 ;
-(NSURL *)audioFileURL;
-(void)updateSanitizedCopy:(id)arg1 withZone:(NSZone*)arg2 ;
-(void)setTrashed:(BOOL)arg1 ;
-(void)updateCopy:(id)arg1 withZone:(NSZone*)arg2 ;
-(id)sanitizedCopyWithZone:(NSZone*)arg1 ;
-(id)sanitizedCopy;
-(NSDate *)dateReceived;
-(void)setDateReceived:(NSDate *)arg1 ;
-(void)setPlayed:(BOOL)arg1 ;
-(BOOL)isEqualToVoicemail:(id)arg1 ;
@end

