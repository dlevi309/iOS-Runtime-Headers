/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
*/

#import <CallKit/CallKit-Structs.h>
#import <CallKit/CXVoicemailAction.h>

@interface CXSetTrashedVoicemailAction : CXVoicemailAction {

	BOOL _trashed;

}

@property (assign,getter=isTrashed,nonatomic) BOOL trashed;              //@synthesize trashed=_trashed - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setTrashed:(BOOL)arg1 ;
-(BOOL)isTrashed;
-(id)customDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)updateSanitizedCopy:(id)arg1 withZone:(NSZone*)arg2 ;
-(id)initWithVoicemailUUID:(id)arg1 trashed:(BOOL)arg2 ;
@end

