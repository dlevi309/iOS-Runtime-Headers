/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

@class NSString;


@protocol SXInsertableComponent <NSObject>
@property (nonatomic,retain) NSString * identifier; 
@property (nonatomic,retain) NSString * layout; 
@property (nonatomic,retain) id<SXComponentAnchor> anchor; 
@required
-(void)setIdentifier:(id)arg1;
-(id<SXComponentAnchor>)anchor;
-(NSString *)identifier;
-(void)setAnchor:(id)arg1;
-(void)setLayout:(id)arg1;
-(NSString *)layout;

@end

