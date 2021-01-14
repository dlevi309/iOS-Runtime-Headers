/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/


@class NSDate;

@interface TSPPackageEntryInfo : NSObject {

	unsigned _CRC;
	unsigned long long _encodedLength;
	NSDate* _lastModificationDate;

}

@property (nonatomic,readonly) unsigned long long encodedLength;              //@synthesize encodedLength=_encodedLength - In the implementation block
@property (nonatomic,readonly) NSDate * lastModificationDate;                 //@synthesize lastModificationDate=_lastModificationDate - In the implementation block
@property (nonatomic,readonly) unsigned CRC;                                  //@synthesize CRC=_CRC - In the implementation block
-(unsigned)CRC;
-(id)init;
-(unsigned long long)encodedLength;
-(NSDate *)lastModificationDate;
-(id)initWithEncodedLength:(unsigned long long)arg1 lastModificationDate:(id)arg2 CRC:(unsigned)arg3 ;
@end

