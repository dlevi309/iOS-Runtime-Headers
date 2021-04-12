/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NENexusFlow.h>

@class NWPath;

@interface NENexusPathFlow : NENexusFlow {

	NWPath* _path;

}

@property (retain) NWPath * path;              //@synthesize path=_path - In the implementation block
-(NWPath *)path;
-(id)initWithPath:(id)arg1 ;
-(id)endpoint;
-(void)setPath:(NWPath *)arg1 ;
-(id)parameters;
-(id)clientIdentifier;
@end

