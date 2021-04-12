/*
* Generated on Monday, March 1, 2021 at 2:30:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Network.framework/Network
*/

#import <Network/Network-Structs.h>
#import <libobjc.A.dylib/NWPrettyDescription.h>

@protocol OS_nw_browse_descriptor;
@class NSObject, NSString;

@interface NWBrowseDescriptor : NSObject <NWPrettyDescription> {

	NSObject*<OS_nw_browse_descriptor> _internalDescriptor;

}

@property (nonatomic,retain) NSObject*<OS_nw_browse_descriptor> internalDescriptor;              //@synthesize internalDescriptor=_internalDescriptor - In the implementation block
@property (nonatomic,copy,readonly) NSString * privateDescription; 
@property (nonatomic,readonly) NSString * bonjourServiceDomain; 
@property (nonatomic,readonly) NSString * bonjourServiceType; 
+(unsigned)descriptorType;
+(BOOL)supportsBrowseCallback;
+(Class)copyClassForDescriptorType:(int)arg1 ;
+(id)descriptorWithInternalDescriptor:(id)arg1 ;
+(id)descriptorWithProtocolBufferData:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)encodedData;
-(id)initWithDescriptor:(id)arg1 ;
-(id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2 ;
-(NSString *)privateDescription;
-(NSString *)bonjourServiceDomain;
-(NSString *)bonjourServiceType;
-(NSObject*<OS_nw_browse_descriptor>)internalDescriptor;
-(void)setInternalDescriptor:(NSObject*<OS_nw_browse_descriptor>)arg1 ;
-(id)initWithEncodedData:(id)arg1 ;
-(id)createProtocolBufferObject;
-(void)browseWithCompletionHandler:(/*^block*/id)arg1 ;
@end

