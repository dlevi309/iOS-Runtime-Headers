/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXJSONObject.h>
#import <libobjc.A.dylib/SXComponentAnchor.h>

@class NSString;

@interface SXJSONComponentAnchor : SXJSONObject <SXComponentAnchor>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long targetAnchorPosition; 
@property (nonatomic,readonly) long long originAnchorPosition; 
@property (nonatomic,readonly) NSString * targetComponentIdentifier; 
@property (nonatomic,readonly) NSRange range; 
-(NSRange)range;
-(NSString *)targetComponentIdentifier;
-(long long)originAnchorPosition;
-(long long)targetAnchorPosition;
-(long long)anchorAlignmentForString:(id)arg1 ;
-(long long)originAnchorPositionWithValue:(id)arg1 withType:(int)arg2 ;
-(long long)targetAnchorPositionWithValue:(id)arg1 withType:(int)arg2 ;
@end

