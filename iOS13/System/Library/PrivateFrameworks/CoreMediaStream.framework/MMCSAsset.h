/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
*/

@class NSString, NSData, NSError, NSDate;


@protocol MMCSAsset <NSObject>
@property (nonatomic,retain) NSString * MMCSUTI; 
@property (assign,nonatomic) unsigned long long MMCSItemID; 
@property (nonatomic,retain) NSData * MMCSHash; 
@property (assign,nonatomic) unsigned long long MMCSItemSize; 
@property (nonatomic,retain) NSError * MMCSError; 
@property (nonatomic,retain) NSString * MMCSAccessHeader; 
@property (nonatomic,retain) NSDate * MMCSAccessHeaderTimeStamp; 
@property (nonatomic,retain) NSString * MMCSReceipt; 
@property (assign,nonatomic) unsigned MMCSItemFlags; 
@required
-(int)MMCSOpenNewFileDescriptor;
-(id)MMCSItemType;
-(NSString *)MMCSUTI;
-(void)setMMCSUTI:(id)arg1;
-(unsigned long long)MMCSItemID;
-(void)setMMCSItemID:(unsigned long long)arg1;
-(NSData *)MMCSHash;
-(void)setMMCSHash:(id)arg1;
-(unsigned long long)MMCSItemSize;
-(void)setMMCSItemSize:(unsigned long long)arg1;
-(NSError *)MMCSError;
-(void)setMMCSError:(id)arg1;
-(NSString *)MMCSAccessHeader;
-(void)setMMCSAccessHeader:(id)arg1;
-(NSDate *)MMCSAccessHeaderTimeStamp;
-(void)setMMCSAccessHeaderTimeStamp:(id)arg1;
-(NSString *)MMCSReceipt;
-(void)setMMCSReceipt:(id)arg1;
-(unsigned)MMCSItemFlags;
-(void)setMMCSItemFlags:(unsigned)arg1;

@end

