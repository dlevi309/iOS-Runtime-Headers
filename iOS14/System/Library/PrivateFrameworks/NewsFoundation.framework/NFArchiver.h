/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
*/

#import <libobjc.A.dylib/NFArchiver.h>

@protocol NFArchiver <NSObject>
@required
-(BOOL)unarchive:(id)arg1 toLocation:(id)arg2;
-(BOOL)archiveDirectory:(id)arg1 toLocation:(id)arg2;

@end


@class NSString;

@interface NFArchiver : NSObject <NFArchiver>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)unarchive:(id)arg1 toLocation:(id)arg2 ;
-(BOOL)archiveDirectory:(id)arg1 toLocation:(id)arg2 ;
@end

