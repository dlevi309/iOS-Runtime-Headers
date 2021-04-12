/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UARPiCloud.framework/UARPiCloud
*/

#import <UARPiCloud/UARPiCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString, UARPiCloudAccessoryRecord;

@interface UARPiCloudAccessory : NSObject <NSCopying> {

	NSMutableArray* _availableRecords;
	NSString* _productGroup;
	NSString* _productNumber;
	NSString* _firmwareVersion;
	UARPiCloudAccessoryRecord* _record;

}

@property (readonly) NSString * productGroup;                       //@synthesize productGroup=_productGroup - In the implementation block
@property (readonly) NSString * productNumber;                      //@synthesize productNumber=_productNumber - In the implementation block
@property (readonly) NSString * firmwareVersion;                    //@synthesize firmwareVersion=_firmwareVersion - In the implementation block
@property (copy) NSMutableArray * availableRecords;                 //@synthesize availableRecords=_availableRecords - In the implementation block
@property (retain) UARPiCloudAccessoryRecord * record;              //@synthesize record=_record - In the implementation block
-(UARPiCloudAccessoryRecord *)record;
-(NSString *)firmwareVersion;
-(void)setRecord:(UARPiCloudAccessoryRecord *)arg1 ;
-(NSString *)productNumber;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithProductGroup:(id)arg1 productNumber:(id)arg2 firmwareVersion:(id)arg3 ;
-(NSString *)productGroup;
-(void)setAvailableRecords:(NSMutableArray *)arg1 ;
-(NSMutableArray *)availableRecords;
@end

