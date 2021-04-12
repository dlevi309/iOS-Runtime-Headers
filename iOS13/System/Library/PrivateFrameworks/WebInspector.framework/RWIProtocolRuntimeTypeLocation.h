/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolRuntimeTypeLocation : RWIProtocolJSONObject

@property (assign,nonatomic) int typeInformationDescriptor; 
@property (nonatomic,copy) NSString * sourceID; 
@property (assign,nonatomic) int divot; 
-(NSString *)sourceID;
-(void)setSourceID:(NSString *)arg1 ;
-(void)setTypeInformationDescriptor:(int)arg1 ;
-(void)setDivot:(int)arg1 ;
-(id)initWithTypeInformationDescriptor:(int)arg1 sourceID:(id)arg2 divot:(int)arg3 ;
-(int)typeInformationDescriptor;
-(int)divot;
@end

