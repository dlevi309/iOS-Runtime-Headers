/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/

#import <DAEAS/ASItem.h>
#import <libobjc.A.dylib/ASParsingAcceptingTopLevelLeaves.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, NSMutableDictionary;

@interface ASAttendee : ASItem <ASParsingAcceptingTopLevelLeaves, NSSecureCoding> {

	int _status;
	int _role;
	int _localId;
	NSString* _name;
	NSString* _email;
	NSDate* _proposedStartTime;
	NSDate* _proposedEndTime;
	NSString* _invitedBy;
	NSMutableDictionary* _placeHolder;

}

@property (nonatomic,retain) NSMutableDictionary * placeHolder;              //@synthesize placeHolder=_placeHolder - In the implementation block
@property (nonatomic,retain) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * email;                               //@synthesize email=_email - In the implementation block
@property (assign,nonatomic) int status;                                     //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) int role;                                       //@synthesize role=_role - In the implementation block
@property (nonatomic,retain) NSDate * proposedStartTime;                     //@synthesize proposedStartTime=_proposedStartTime - In the implementation block
@property (nonatomic,retain) NSDate * proposedEndTime;                       //@synthesize proposedEndTime=_proposedEndTime - In the implementation block
@property (assign,nonatomic) int localId;                                    //@synthesize localId=_localId - In the implementation block
@property (nonatomic,retain) NSString * invitedBy;                           //@synthesize invitedBy=_invitedBy - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(id)init;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)role;
-(void)setName:(NSString *)arg1 ;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(NSString *)email;
-(void)setEmail:(NSString *)arg1 ;
-(void)setRole:(int)arg1 ;
-(NSString *)invitedBy;
-(void)applyPlaceHolder;
-(void)clearPlaceHolder;
-(void)setObject:(id)arg1 forDCCPT:(int)arg2 ;
-(NSDate *)proposedStartTime;
-(void)setProposedStartTime:(NSDate *)arg1 ;
-(NSDate *)proposedEndTime;
-(void)setProposedEndTime:(NSDate *)arg1 ;
-(void)appendActiveSyncDataForTask:(id)arg1 toData:(id)arg2 ;
-(NSMutableDictionary *)placeHolder;
-(void)setLocalId:(int)arg1 ;
-(void)setPlaceHolder:(NSMutableDictionary *)arg1 ;
-(int)localId;
-(void)setInvitedBy:(NSString *)arg1 ;
-(void)saveToCalendarWithParentASEvent:(id)arg1 existingRecord:(void*)arg2 isDefaultCalendar:(BOOL)arg3 shouldMergeProperties:(BOOL)arg4 outMergeDidChooseLocalProperties:(BOOL*)arg5 ;
-(id)initWithCalAttendee:(void*)arg1 parentEvent:(id)arg2 ;
-(id)fullEmailString;
-(id)copyOfSelfWithoutLocalID;
-(id)icsUserAddress;
@end

