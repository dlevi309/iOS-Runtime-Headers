/*
* Generated on Thursday, January 14, 2021 at 2:24:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(NSString *)ID;
-(BOOL)dirty;
-(void)setID:(NSString *)arg1 ;
-(void)setDirty:(BOOL)arg1 ;
-(id)init;
-(void)setEncryptedID:(NSData *)arg1 ;
-(id)description;
-(NSData *)encryptedID;
-(id)initWithID:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

