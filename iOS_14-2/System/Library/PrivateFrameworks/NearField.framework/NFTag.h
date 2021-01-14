/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NFTag.h>
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

#import <libobjc.A.dylib/NFTagA.h>
#import <libobjc.A.dylib/NFTagB.h>
#import <libobjc.A.dylib/NFTagF.h>

@class NSData, NSArray, NSString;

@interface NFTag : NSObject <NSSecureCoding, NFTag, NFTagA, NFTagB, NFTagF> {

	unsigned _type;
	unsigned _technology;
	NSData* _tagID;
	NSData* _pmm;
	NSArray* _allSystemCodes;
	NSData* _appData;
	NSData* _uid;
	NSString* _description;
	unsigned _ndefAvailability;
	unsigned long long _ndefMessageSize;
	unsigned long long _ndefContainerSize;
	NSData* _atqa;
	NSData* _sak;
	NSData* _historicalBytes;

}

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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSData * atqa; 
@property (nonatomic,copy,readonly) NSData * sak; 
@property (nonatomic,copy,readonly) NSData * historicalBytes; 
@property (nonatomic,copy,readonly) NSData * selectedAID; 
@property (nonatomic,copy,readonly) NSData * pupi; 
@property (nonatomic,copy,readonly) NSData * applicationData; 
@property (nonatomic,readonly) BOOL applicationDataCoding; 
@property (nonatomic,copy,readonly) NSData * IDm; 
@property (nonatomic,copy,readonly) NSData * PMm; 
@property (nonatomic,copy,readonly) NSData * SystemCode; 
@property (nonatomic,copy,readonly) NSArray * allSystemCodes; 
+(BOOL)supportsSecureCoding;
-(NSData *)IDm;
-(NSData *)PMm;
-(NSData *)sak;
-(id<NFTagA>)tagA;
-(id<NFTagB>)tagB;
-(id<NFTagF>)tagF;
-(NSData *)tagID;
-(NSData *)atqa;
-(NSData *)pupi;
-(NSData *)UID;
-(void)encodeWithCoder:(id)arg1 ;
-(NSData *)AppData;
-(NSString *)description;
-(NSData *)applicationData;
-(BOOL)isEqualToNFTag:(id)arg1 ;
-(unsigned)ndefAvailability;
-(unsigned long long)ndefMessageSize;
-(unsigned long long)ndefContainerSize;
-(unsigned)type;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)historicalBytes;
-(NSData *)selectedAID;
-(unsigned)technology;
-(id)initWithNFTag:(id)arg1 ;
-(NSData *)SystemCode;
-(BOOL)applicationDataCoding;
-(NSArray *)allSystemCodes;
@end

