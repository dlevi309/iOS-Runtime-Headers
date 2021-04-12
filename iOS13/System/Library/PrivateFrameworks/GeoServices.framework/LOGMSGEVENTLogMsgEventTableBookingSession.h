/*
* Generated on Monday, March 1, 2021 at 2:30:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString, NSMutableArray;

@interface LOGMSGEVENTLogMsgEventTableBookingSession : PBCodable <NSCopying> {

	PBDataReader* _reader;
	long long _blurredBookingTimestamp;
	long long _blurredReservationTimestamp;
	NSString* _bookTableAppId;
	NSString* _bookTableSessionId;
	double _durationOfSessionInSeconds;
	NSMutableArray* _errorMessages;
	NSString* _installNeededTappedAppId;
	unsigned long long _muid;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _endState;
	int _endView;
	unsigned _tableSize;
	BOOL _addedSpecialRequest;
	BOOL _installCompleted;
	BOOL _installNeeded;
	BOOL _swipedAvailableTimes;
	BOOL _tappedDatePicker;
	struct {
		unsigned has_blurredBookingTimestamp : 1;
		unsigned has_blurredReservationTimestamp : 1;
		unsigned has_durationOfSessionInSeconds : 1;
		unsigned has_muid : 1;
		unsigned has_endState : 1;
		unsigned has_endView : 1;
		unsigned has_tableSize : 1;
		unsigned has_addedSpecialRequest : 1;
		unsigned has_installCompleted : 1;
		unsigned has_installNeeded : 1;
		unsigned has_swipedAvailableTimes : 1;
		unsigned has_tappedDatePicker : 1;
		unsigned read_bookTableAppId : 1;
		unsigned read_bookTableSessionId : 1;
		unsigned read_errorMessages : 1;
		unsigned read_installNeededTappedAppId : 1;
		unsigned wrote_blurredBookingTimestamp : 1;
		unsigned wrote_blurredReservationTimestamp : 1;
		unsigned wrote_bookTableAppId : 1;
		unsigned wrote_bookTableSessionId : 1;
		unsigned wrote_durationOfSessionInSeconds : 1;
		unsigned wrote_errorMessages : 1;
		unsigned wrote_installNeededTappedAppId : 1;
		unsigned wrote_muid : 1;
		unsigned wrote_endState : 1;
		unsigned wrote_endView : 1;
		unsigned wrote_tableSize : 1;
		unsigned wrote_addedSpecialRequest : 1;
		unsigned wrote_installCompleted : 1;
		unsigned wrote_installNeeded : 1;
		unsigned wrote_swipedAvailableTimes : 1;
		unsigned wrote_tappedDatePicker : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasBookTableSessionId; 
@property (nonatomic,retain) NSString * bookTableSessionId; 
@property (assign,nonatomic) BOOL hasEndState; 
@property (assign,nonatomic) int endState; 
@property (assign,nonatomic) BOOL hasEndView; 
@property (assign,nonatomic) int endView; 
@property (nonatomic,readonly) BOOL hasBookTableAppId; 
@property (nonatomic,retain) NSString * bookTableAppId; 
@property (assign,nonatomic) BOOL hasMuid; 
@property (assign,nonatomic) unsigned long long muid; 
@property (assign,nonatomic) BOOL hasBlurredReservationTimestamp; 
@property (assign,nonatomic) long long blurredReservationTimestamp; 
@property (assign,nonatomic) BOOL hasBlurredBookingTimestamp; 
@property (assign,nonatomic) long long blurredBookingTimestamp; 
@property (assign,nonatomic) BOOL hasDurationOfSessionInSeconds; 
@property (assign,nonatomic) double durationOfSessionInSeconds; 
@property (assign,nonatomic) BOOL hasInstallNeeded; 
@property (assign,nonatomic) BOOL installNeeded; 
@property (nonatomic,readonly) BOOL hasInstallNeededTappedAppId; 
@property (nonatomic,retain) NSString * installNeededTappedAppId; 
@property (assign,nonatomic) BOOL hasInstallCompleted; 
@property (assign,nonatomic) BOOL installCompleted; 
@property (assign,nonatomic) BOOL hasTableSize; 
@property (assign,nonatomic) unsigned tableSize; 
@property (assign,nonatomic) BOOL hasAddedSpecialRequest; 
@property (assign,nonatomic) BOOL addedSpecialRequest; 
@property (assign,nonatomic) BOOL hasSwipedAvailableTimes; 
@property (assign,nonatomic) BOOL swipedAvailableTimes; 
@property (assign,nonatomic) BOOL hasTappedDatePicker; 
@property (assign,nonatomic) BOOL tappedDatePicker; 
@property (nonatomic,retain) NSMutableArray * errorMessages; 
+(BOOL)isValid:(id)arg1 ;
+(Class)errorMessageType;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)endState;
-(void)setEndState:(int)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)hasMuid;
-(unsigned long long)muid;
-(void)setMuid:(unsigned long long)arg1 ;
-(void)setHasMuid:(BOOL)arg1 ;
-(void)_readErrorMessages;
-(void)_addNoFlagsErrorMessage:(id)arg1 ;
-(NSMutableArray *)errorMessages;
-(unsigned long long)errorMessagesCount;
-(void)clearErrorMessages;
-(id)errorMessageAtIndex:(unsigned long long)arg1 ;
-(void)addErrorMessage:(id)arg1 ;
-(void)setHasEndState:(BOOL)arg1 ;
-(BOOL)hasEndState;
-(id)endStateAsString:(int)arg1 ;
-(int)StringAsEndState:(id)arg1 ;
-(int)endView;
-(void)setEndView:(int)arg1 ;
-(void)setHasEndView:(BOOL)arg1 ;
-(BOOL)hasEndView;
-(id)endViewAsString:(int)arg1 ;
-(int)StringAsEndView:(id)arg1 ;
-(double)durationOfSessionInSeconds;
-(void)setDurationOfSessionInSeconds:(double)arg1 ;
-(void)setHasDurationOfSessionInSeconds:(BOOL)arg1 ;
-(BOOL)hasDurationOfSessionInSeconds;
-(void)setErrorMessages:(NSMutableArray *)arg1 ;
-(void)_readBookTableSessionId;
-(void)_readBookTableAppId;
-(void)_readInstallNeededTappedAppId;
-(NSString *)bookTableSessionId;
-(NSString *)bookTableAppId;
-(NSString *)installNeededTappedAppId;
-(void)setBookTableSessionId:(NSString *)arg1 ;
-(void)setBookTableAppId:(NSString *)arg1 ;
-(void)setInstallNeededTappedAppId:(NSString *)arg1 ;
-(BOOL)hasBookTableSessionId;
-(BOOL)hasBookTableAppId;
-(long long)blurredReservationTimestamp;
-(void)setBlurredReservationTimestamp:(long long)arg1 ;
-(void)setHasBlurredReservationTimestamp:(BOOL)arg1 ;
-(BOOL)hasBlurredReservationTimestamp;
-(long long)blurredBookingTimestamp;
-(void)setBlurredBookingTimestamp:(long long)arg1 ;
-(void)setHasBlurredBookingTimestamp:(BOOL)arg1 ;
-(BOOL)hasBlurredBookingTimestamp;
-(BOOL)installNeeded;
-(void)setInstallNeeded:(BOOL)arg1 ;
-(void)setHasInstallNeeded:(BOOL)arg1 ;
-(BOOL)hasInstallNeeded;
-(BOOL)hasInstallNeededTappedAppId;
-(BOOL)installCompleted;
-(void)setInstallCompleted:(BOOL)arg1 ;
-(void)setHasInstallCompleted:(BOOL)arg1 ;
-(BOOL)hasInstallCompleted;
-(unsigned)tableSize;
-(void)setTableSize:(unsigned)arg1 ;
-(void)setHasTableSize:(BOOL)arg1 ;
-(BOOL)hasTableSize;
-(BOOL)addedSpecialRequest;
-(void)setAddedSpecialRequest:(BOOL)arg1 ;
-(void)setHasAddedSpecialRequest:(BOOL)arg1 ;
-(BOOL)hasAddedSpecialRequest;
-(BOOL)swipedAvailableTimes;
-(void)setSwipedAvailableTimes:(BOOL)arg1 ;
-(void)setHasSwipedAvailableTimes:(BOOL)arg1 ;
-(BOOL)hasSwipedAvailableTimes;
-(BOOL)tappedDatePicker;
-(void)setTappedDatePicker:(BOOL)arg1 ;
-(void)setHasTappedDatePicker:(BOOL)arg1 ;
-(BOOL)hasTappedDatePicker;
@end

