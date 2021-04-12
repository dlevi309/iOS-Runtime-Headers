/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libnfshared.dylib
*/

@class NSData;


@protocol NFTag <NSObject>
@property (nonatomic,readonly) unsigned type; 
@property (nonatomic,readonly) unsigned technology; 
@property (nonatomic,copy,readonly) NSData * tagID; 
@property (nonatomic,copy,readonly) NSData * UID; 
@property (nonatomic,readonly) unsigned ndefAvailability; 
@property (nonatomic,readonly) unsigned long long ndefMessageSize; 
@property (nonatomic,readonly) unsigned long long ndefContainerSize; 
@property (nonatomic,copy,readonly) NSData * AppData; 
@property (nonatomic,readonly) id<NFTagA> tagA; 
@property (nonatomic,readonly) id<NFTagB> tagB; 
@property (nonatomic,readonly) id<NFTagF> tagF; 
@required
-(id)description;
-(unsigned)type;
-(NSData *)tagID;
-(id)initWithNFTag:(id)arg1;
-(BOOL)isEqualToNFTag:(id)arg1;
-(unsigned)technology;
-(NSData *)UID;
-(unsigned)ndefAvailability;
-(unsigned long long)ndefMessageSize;
-(unsigned long long)ndefContainerSize;
-(NSData *)AppData;
-(id<NFTagA>)tagA;
-(id<NFTagB>)tagB;
-(id<NFTagF>)tagF;

@end

