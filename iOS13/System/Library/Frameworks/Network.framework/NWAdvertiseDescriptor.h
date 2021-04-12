/*
* Generated on Monday, March 1, 2021 at 2:30:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Network.framework/Network
*/


@protocol OS_nw_advertise_descriptor;
#import <Network/Network-Structs.h>
@class NSObject, NSString, NSData;

@interface NWAdvertiseDescriptor : NSObject {

	NSObject*<OS_nw_advertise_descriptor> _internalDescriptor;

}

@property (nonatomic,retain) NSObject*<OS_nw_advertise_descriptor> internalDescriptor;              //@synthesize internalDescriptor=_internalDescriptor - In the implementation block
@property (nonatomic,readonly) NSString * bonjourServiceDomain; 
@property (nonatomic,readonly) NSString * bonjourServiceType; 
@property (nonatomic,readonly) NSString * bonjourServiceName; 
@property (nonatomic,retain) NSData * txtRecord; 
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithName:(id)arg1 type:(id)arg2 domain:(id)arg3 ;
-(id)initWithDescriptor:(id)arg1 ;
-(id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2 ;
-(id)privateDescription;
-(NSData *)txtRecord;
-(void)setTxtRecord:(NSData *)arg1 ;
-(NSString *)bonjourServiceDomain;
-(NSString *)bonjourServiceType;
-(NSString *)bonjourServiceName;
-(NSObject*<OS_nw_advertise_descriptor>)internalDescriptor;
-(void)setInternalDescriptor:(NSObject*<OS_nw_advertise_descriptor>)arg1 ;
@end

