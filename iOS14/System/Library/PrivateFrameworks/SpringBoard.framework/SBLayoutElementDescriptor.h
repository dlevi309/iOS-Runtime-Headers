/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

@class NSString;


@protocol SBLayoutElementDescriptor <NSObject>
@property (nonatomic,copy,readonly) NSString * uniqueIdentifier; 
@property (nonatomic,readonly) long long layoutRole; 
@property (nonatomic,readonly) unsigned long long supportedLayoutRoles; 
@property (nonatomic,readonly) unsigned long long layoutAttributes; 
@property (nonatomic,readonly) Class viewControllerClass; 
@property (nonatomic,copy,readonly) id entityGenerator; 
@required
-(long long)layoutRole;
-(unsigned long long)layoutAttributes;
-(Class)viewControllerClass;
-(NSString *)uniqueIdentifier;
-(unsigned long long)supportedLayoutRoles;
-(id)entityGenerator;
-(BOOL)hasLayoutAttributes:(unsigned long long)arg1;
-(BOOL)supportsLayoutRole:(long long)arg1;

@end

