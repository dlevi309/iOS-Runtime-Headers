/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/


@class NWBrowseDescriptor, NWParameters, NSUUID;

@interface NENexusBrowse : NSObject {

	NWBrowseDescriptor* _descriptor;
	NWParameters* _parameters;
	NSUUID* _clientIdentifier;

}

@property (nonatomic,retain) NWBrowseDescriptor * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,retain) NWParameters * parameters;                    //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,retain) NSUUID * clientIdentifier;                    //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
-(NWParameters *)parameters;
-(void)setParameters:(NWParameters *)arg1 ;
-(void)setClientIdentifier:(NSUUID *)arg1 ;
-(NWBrowseDescriptor *)descriptor;
-(void)setDescriptor:(NWBrowseDescriptor *)arg1 ;
-(NSUUID *)clientIdentifier;
@end

