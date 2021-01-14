/*
* Generated on Thursday, January 14, 2021 at 2:27:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUARP.framework/CoreUARP
*/


@class UARPAssetID, NSData;

@interface UARPAsset : NSObject {

	UARPAssetID* _id;
	NSData* _data;

}

@property (readonly) UARPAssetID * id;              //@synthesize id=_id - In the implementation block
@property (readonly) NSData * data;                 //@synthesize data=_data - In the implementation block
-(UARPAssetID *)id;
-(id)description;
-(NSData *)data;
-(id)initWithID:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithID:(id)arg1 withBuffer:(id)arg2 ;
@end

