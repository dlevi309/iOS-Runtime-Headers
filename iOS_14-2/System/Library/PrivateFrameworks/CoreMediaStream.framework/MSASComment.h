/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface MSASComment : NSObject <NSSecureCoding> {

	BOOL _isLike;
	BOOL _isCaption;
	BOOL _isBatchComment;
	BOOL _isDeletable;
	BOOL _isMine;
	int _ID;
	NSString* _GUID;
	NSDate* _timestamp;
	NSDate* _clientTimestamp;
	NSString* _personID;
	NSString* _firstName;
	NSString* _lastName;
	NSString* _fullName;
	NSString* _email;
	NSString* _content;

}

@property (getter=UID,nonatomic,retain) NSString * GUID;              //@synthesize GUID=_GUID - In the implementation block
@property (assign,nonatomic) int ID;                                  //@synthesize ID=_ID - In the implementation block
@property (nonatomic,retain) NSDate * timestamp;                      //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSDate * clientTimestamp;                //@synthesize clientTimestamp=_clientTimestamp - In the implementation block
@property (nonatomic,retain) NSString * email;                        //@synthesize email=_email - In the implementation block
@property (nonatomic,retain) NSString * personID;                     //@synthesize personID=_personID - In the implementation block
@property (nonatomic,retain) NSString * fullName;                     //@synthesize fullName=_fullName - In the implementation block
@property (nonatomic,retain) NSString * firstName;                    //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,retain) NSString * lastName;                     //@synthesize lastName=_lastName - In the implementation block
@property (assign,nonatomic) BOOL isDeletable;                        //@synthesize isDeletable=_isDeletable - In the implementation block
@property (assign,nonatomic) BOOL isMine;                             //@synthesize isMine=_isMine - In the implementation block
@property (assign,nonatomic) BOOL isLike;                             //@synthesize isLike=_isLike - In the implementation block
@property (assign,nonatomic) BOOL isCaption;                          //@synthesize isCaption=_isCaption - In the implementation block
@property (assign,nonatomic) BOOL isBatchComment;                     //@synthesize isBatchComment=_isBatchComment - In the implementation block
@property (nonatomic,retain) NSString * content;                      //@synthesize content=_content - In the implementation block
+(id)comment;
+(BOOL)supportsSecureCoding;
+(id)MSASPCommentFromProtocolDictionary:(id)arg1 ;
-(int)ID;
-(void)setFullName:(NSString *)arg1 ;
-(void)setEmail:(NSString *)arg1 ;
-(NSString *)firstName;
-(void)setID:(int)arg1 ;
-(NSString *)lastName;
-(NSString *)fullName;
-(BOOL)isMine;
-(NSString *)content;
-(void)setLastName:(NSString *)arg1 ;
-(id)init;
-(void)setContent:(NSString *)arg1 ;
-(void)setFirstName:(NSString *)arg1 ;
-(BOOL)isLike;
-(NSDate *)timestamp;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSDate *)clientTimestamp;
-(void)setGUID:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)personID;
-(void)setIsCaption:(BOOL)arg1 ;
-(void)setIsBatchComment:(BOOL)arg1 ;
-(void)setIsDeletable:(BOOL)arg1 ;
-(void)setIsMine:(BOOL)arg1 ;
-(void)setIsLike:(BOOL)arg1 ;
-(void)setPersonID:(NSString *)arg1 ;
-(BOOL)isCaption;
-(NSString *)email;
-(BOOL)isDeletable;
-(void)setTimestamp:(NSDate *)arg1 ;
-(NSString *)GUID;
-(BOOL)isBatchComment;
-(BOOL)isEqual:(id)arg1 ;
-(void)setClientTimestamp:(NSDate *)arg1 ;
@end

