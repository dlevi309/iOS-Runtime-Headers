/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

@class NSString;


@protocol SXInsertableComponent <NSObject>
@property (nonatomic,retain) NSString * identifier; 
@property (nonatomic,retain) NSString * layout; 
@property (nonatomic,retain) id<SXComponentAnchor> anchor; 
@required
-(NSString *)identifier;
-(void)setIdentifier:(id)arg1;
-(NSString *)layout;
-(void)setLayout:(id)arg1;
-(id<SXComponentAnchor>)anchor;
-(void)setAnchor:(id)arg1;

@end

