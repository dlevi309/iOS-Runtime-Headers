/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
*/


@class NSMutableArray, UIColor;

@interface CAIAANodeInfo : NSObject {

	NSMutableArray* nodeList;
	UIColor* labelColor;

}

@property (readonly) unsigned long long numNodes; 
@property (retain) UIColor * labelColor; 
-(id)init;
-(void)refresh;
-(UIColor *)labelColor;
-(void)setLabelColor:(UIColor *)arg1 ;
-(id)nodeAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numNodes;
-(void)createNodeList;
-(id)nodeWithNodeInfo:(id)arg1 ;
@end

