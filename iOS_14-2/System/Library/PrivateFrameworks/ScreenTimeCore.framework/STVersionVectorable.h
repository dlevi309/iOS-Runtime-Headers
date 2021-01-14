/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/

@class NSData;


@protocol STVersionVectorable
@property (nonatomic,copy) NSData * versionVector; 
@property (assign,nonatomic) BOOL isDirty; 
@required
-(BOOL)isDirty;
-(NSData *)versionVector;
-(void)setIsDirty:(BOOL)arg1;
-(void)setVersionVector:(id)arg1;

@end

