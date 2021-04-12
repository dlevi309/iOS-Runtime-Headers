/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libnfshared.dylib
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NFTag.h>
#import <libobjc.A.dylib/NFTagA.h>
#import <libobjc.A.dylib/NFTagB.h>
#import <libobjc.A.dylib/NFTagF.h>

@class NSData, NSArray, NSString;

@interface NFTagInternal : NSObject <NSSecureCoding, NFTag, NFTagA, NFTagB, NFTagF> {

	unsigned _type;
	unsigned _technology;
	NSData* _tagID;
	NSData* _idm;
	NSData* _pmm;
	NSArray* _allSystemCodes;
	NSData* _appData;
	NSData* _uid;
	unsigned _ndefAvailability;
	unsigned long long _ndefMessageSize;
	unsigned long long _ndefContainerSize;
	NSData* _atqa;
	NSData* _sak;
	NSData* _historicalBytes;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
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
-(void)dealloc;
-(NSString *)description;
-(unsigned)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)_setIdentifier:(id)arg1 ;
-(void)_setType:(unsigned)arg1 ;
-(NSData *)applicationData;
-(NSData *)tagID;
-(id)initWithNFTag:(id)arg1 ;
-(BOOL)isEqualToNFTag:(id)arg1 ;
-(unsigned)technology;
-(NSData *)UID;
-(unsigned)ndefAvailability;
-(unsigned long long)ndefMessageSize;
-(unsigned long long)ndefContainerSize;
-(NSData *)AppData;
-(id<NFTagA>)tagA;
-(id<NFTagB>)tagB;
-(id<NFTagF>)tagF;
-(NSData *)selectedAID;
-(NSData *)IDm;
-(NSData *)PMm;
-(NSData *)SystemCode;
-(NSData *)atqa;
-(NSData *)sak;
-(NSData *)historicalBytes;
-(NSData *)pupi;
-(BOOL)applicationDataCoding;
-(NSArray *)allSystemCodes;
-(id)_getSystemCodeListString;
-(id)initWithNFTagForUIDOnly:(id)arg1 ;
-(void)_setIDm:(id)arg1 ;
-(void)_setPMm:(id)arg1 ;
-(void)_setSystemCode:(id)arg1 ;
-(void)_setTechnology:(unsigned)arg1 ;
-(void)_setUID:(id)arg1 ;
-(void)_setAppData:(id)arg1 ;
-(void)_setSystemCodes:(id)arg1 ;
-(void)_setNDEFAvailability:(unsigned)arg1 ;
-(void)_setNDEFMessageSize:(unsigned long long)arg1 ;
-(void)_setNDEFContainerSize:(unsigned long long)arg1 ;
-(void)_setAtqa:(id)arg1 ;
-(void)_setSak:(id)arg1 ;
-(void)_setHistoricalBytes:(id)arg1 ;
-(void)_setSelectedAID:(id)arg1 ;
@end

