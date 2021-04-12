/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)uniqueIdentifier;
-(long long)layoutRole;
-(unsigned long long)layoutAttributes;
-(Class)viewControllerClass;
-(BOOL)supportsLayoutRole:(long long)arg1;
-(BOOL)hasLayoutAttributes:(unsigned long long)arg1;
-(unsigned long long)supportedLayoutRoles;
-(id)entityGenerator;

@end

