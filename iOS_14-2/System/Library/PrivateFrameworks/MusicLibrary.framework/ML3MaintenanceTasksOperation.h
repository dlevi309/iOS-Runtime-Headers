/*
* Generated on Thursday, January 14, 2021 at 2:24:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <Foundation/NSOperation.h>

@protocol OS_xpc_object;
@class ML3MusicLibrary, NSObject;

@interface ML3MaintenanceTasksOperation : NSOperation {

	ML3MusicLibrary* _library;
	NSObject*<OS_xpc_object> _activity;

}

@property (nonatomic,readonly) ML3MusicLibrary * library;                      //@synthesize library=_library - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_xpc_object> activity;              //@synthesize activity=_activity - In the implementation block
-(ML3MusicLibrary *)library;
-(NSObject*<OS_xpc_object>)activity;
-(void)main;
-(id)initWithLibrary:(id)arg1 activity:(id)arg2 ;
@end

