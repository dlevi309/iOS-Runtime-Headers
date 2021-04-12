/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
*/


@class NSString, NSData;

@interface ADIDRecord : NSObject {

	BOOL _dirty;
	NSString* _ID;
	NSData* _encryptedID;

}

@property (nonatomic,retain) NSData * encryptedID;              //@synthesize encryptedID=_encryptedID - In the implementation block
@property (nonatomic,retain) NSString * ID;                     //@synthesize ID=_ID - In the implementation block
@property (assign,nonatomic) BOOL dirty;                        //@synthesize dirty=_dirty - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)setDirty:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)dirty;
-(NSString *)ID;
-(id)initWithID:(id)arg1 ;
-(void)setID:(NSString *)arg1 ;
-(NSData *)encryptedID;
-(void)setEncryptedID:(NSData *)arg1 ;
@end

