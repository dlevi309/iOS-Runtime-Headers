/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolRuntimeTypeLocation : RWIProtocolJSONObject

@property (assign,nonatomic) int typeInformationDescriptor; 
@property (nonatomic,copy) NSString * sourceID; 
@property (assign,nonatomic) int divot; 
-(void)setSourceID:(NSString *)arg1 ;
-(int)divot;
-(NSString *)sourceID;
-(void)setTypeInformationDescriptor:(int)arg1 ;
-(void)setDivot:(int)arg1 ;
-(id)initWithTypeInformationDescriptor:(int)arg1 sourceID:(id)arg2 divot:(int)arg3 ;
-(int)typeInformationDescriptor;
@end

