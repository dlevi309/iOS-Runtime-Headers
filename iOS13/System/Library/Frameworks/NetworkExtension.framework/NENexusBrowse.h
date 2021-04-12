/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NWBrowseDescriptor *)descriptor;
-(void)setParameters:(NWParameters *)arg1 ;
-(void)setDescriptor:(NWBrowseDescriptor *)arg1 ;
-(void)setClientIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)clientIdentifier;
@end

