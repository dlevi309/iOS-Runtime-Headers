/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXJSONObject.h>
#import <libobjc.A.dylib/SXComponentAnchor.h>

@class NSString;

@interface SXJSONComponentAnchor : SXJSONObject <SXComponentAnchor>

@property (nonatomic,readonly) long long targetAnchorPosition; 
@property (nonatomic,readonly) long long originAnchorPosition; 
@property (nonatomic,readonly) NSString * targetComponentIdentifier; 
@property (nonatomic,readonly) NSRange range; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSRange)range;
-(NSString *)targetComponentIdentifier;
-(long long)originAnchorPosition;
-(long long)targetAnchorPosition;
-(long long)anchorAlignmentForString:(id)arg1 ;
-(long long)originAnchorPositionWithValue:(id)arg1 withType:(int)arg2 ;
-(long long)targetAnchorPositionWithValue:(id)arg1 withType:(int)arg2 ;
@end

