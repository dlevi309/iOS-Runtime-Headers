/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
*/


@class NSMutableArray, UIColor;

@interface CAIAANodeInfo : NSObject {

	NSMutableArray* nodeList;
	UIColor* labelColor;

}

@property (readonly) unsigned long long numNodes; 
@property (retain) UIColor * labelColor; 
-(void)refresh;
-(id)init;
-(void)setLabelColor:(UIColor *)arg1 ;
-(UIColor *)labelColor;
-(id)nodeAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numNodes;
-(void)createNodeList;
-(id)nodeWithNodeInfo:(id)arg1 ;
@end

