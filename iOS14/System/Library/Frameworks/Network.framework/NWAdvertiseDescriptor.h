/*
* Generated on Thursday, January 14, 2021 at 2:22:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)privateDescription;
-(id)initWithDescriptor:(id)arg1 ;
-(void)setTxtRecord:(NSData *)arg1 ;
-(NSData *)txtRecord;
-(id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2 ;
-(id)description;
-(id)initWithName:(id)arg1 type:(id)arg2 domain:(id)arg3 ;
-(NSString *)bonjourServiceDomain;
-(NSString *)bonjourServiceName;
-(NSObject*<OS_nw_advertise_descriptor>)internalDescriptor;
-(void)setInternalDescriptor:(NSObject*<OS_nw_advertise_descriptor>)arg1 ;
-(NSString *)bonjourServiceType;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

