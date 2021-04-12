/*
* Generated on Thursday, January 14, 2021 at 2:21:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
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
-(id<NFTagA>)tagA;
-(id<NFTagB>)tagB;
-(id<NFTagF>)tagF;
-(NSData *)tagID;
-(NSData *)UID;
-(NSData *)AppData;
-(id)description;
-(BOOL)isEqualToNFTag:(id)arg1;
-(unsigned)ndefAvailability;
-(unsigned long long)ndefMessageSize;
-(unsigned long long)ndefContainerSize;
-(unsigned)type;
-(unsigned)technology;
-(id)initWithNFTag:(id)arg1;

@end

