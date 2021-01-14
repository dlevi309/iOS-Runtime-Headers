/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NENexusFlow.h>

@class NWPath;

@interface NENexusPathFlow : NENexusFlow {

	NWPath* _path;

}

@property (retain) NWPath * path;              //@synthesize path=_path - In the implementation block
-(id)parameters;
-(id)initWithPath:(id)arg1 ;
-(void)setPath:(NWPath *)arg1 ;
-(id)endpoint;
-(NWPath *)path;
-(id)clientIdentifier;
@end

