/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/

#import <Sharing/Sharing-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SFAirDropAction, NSString, SFAirDropTransferMetaData, NSError, NSProgress, NSArray, NSURL;

@interface SFAirDropTransfer : NSObject <NSSecureCoding, NSCopying> {

	SFAirDropAction* _cancelAction;
	NSString* _identifier;
	SFAirDropTransferMetaData* _metaData;
	NSError* _error;
	NSProgress* _transferProgress;
	NSString* _contentsTitle;
	NSString* _contentsDescription;
	SFAirDropAction* _selectedAction;
	NSArray* _possibleActions;
	NSArray* _completedURLs;
	unsigned long long _userResponse;
	unsigned long long _transferState;
	unsigned long long _failureReason;
	NSURL* _customDestinationURL;
	id _progressToken;

}

@property (nonatomic,copy) NSURL * customDestinationURL;                        //@synthesize customDestinationURL=_customDestinationURL - In the implementation block
@property (nonatomic,copy) NSString * identifier;                               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) SFAirDropTransferMetaData * metaData;              //@synthesize metaData=_metaData - In the implementation block
@property (assign,nonatomic) unsigned long long userResponse;                   //@synthesize userResponse=_userResponse - In the implementation block
@property (assign,nonatomic) unsigned long long transferState;                  //@synthesize transferState=_transferState - In the implementation block
@property (assign,nonatomic) unsigned long long failureReason;                  //@synthesize failureReason=_failureReason - In the implementation block
@property (nonatomic,retain) NSError * error;                                   //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSProgress * transferProgress;                     //@synthesize transferProgress=_transferProgress - In the implementation block
@property (nonatomic,retain) id progressToken;                                  //@synthesize progressToken=_progressToken - In the implementation block
@property (nonatomic,copy) NSString * contentsTitle;                            //@synthesize contentsTitle=_contentsTitle - In the implementation block
@property (nonatomic,copy) NSString * contentsDescription;                      //@synthesize contentsDescription=_contentsDescription - In the implementation block
@property (nonatomic,retain) SFAirDropAction * selectedAction;                  //@synthesize selectedAction=_selectedAction - In the implementation block
@property (nonatomic,retain) NSArray * possibleActions;                         //@synthesize possibleActions=_possibleActions - In the implementation block
@property (nonatomic,retain) SFAirDropAction * cancelAction;                    //@synthesize cancelAction=_cancelAction - In the implementation block
@property (nonatomic,copy) NSArray * completedURLs;                             //@synthesize completedURLs=_completedURLs - In the implementation block
@property (nonatomic,readonly) BOOL needsAction; 
+(BOOL)supportsSecureCoding;
+(BOOL)automaticallyNotifiesObserversOfFailureReason;
+(BOOL)automaticallyNotifiesObserversOfUserResponse;
+(BOOL)automaticallyNotifiesObserversOfTransferState;
+(id)keyPathsForValuesAffectingNeedsAction;
-(unsigned long long)failureReason;
-(unsigned long long)transferState;
-(NSArray *)possibleActions;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setMetaData:(SFAirDropTransferMetaData *)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(id)description;
-(SFAirDropAction *)cancelAction;
-(SFAirDropAction *)selectedAction;
-(void)setSelectedAction:(SFAirDropAction *)arg1 ;
-(SFAirDropTransferMetaData *)metaData;
-(void)setFailureReason:(unsigned long long)arg1 ;
-(void)setUpProgress;
-(BOOL)updateWithTransfer:(id)arg1 ;
-(void)setTransferState:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setCancelAction:(SFAirDropAction *)arg1 ;
-(BOOL)needsAction;
-(NSString *)contentsDescription;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)updateWithInformation:(id)arg1 ;
-(NSString *)identifier;
-(unsigned long long)userResponse;
-(void)setUserResponse:(unsigned long long)arg1 ;
-(void)setUpProgressToBroadcast:(BOOL)arg1 ;
-(void)setTransferProgress:(NSProgress *)arg1 ;
-(id)progressToken;
-(void)setProgressToken:(id)arg1 ;
-(BOOL)updateUsingCoder:(id)arg1 ;
-(NSString *)contentsTitle;
-(void)setContentsTitle:(NSString *)arg1 ;
-(void)setContentsDescription:(NSString *)arg1 ;
-(void)setPossibleActions:(NSArray *)arg1 ;
-(NSArray *)completedURLs;
-(void)setCompletedURLs:(NSArray *)arg1 ;
-(id)initWithIdentifier:(id)arg1 initialInformation:(id)arg2 ;
-(NSProgress *)transferProgress;
-(NSURL *)customDestinationURL;
-(void)setCustomDestinationURL:(NSURL *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

