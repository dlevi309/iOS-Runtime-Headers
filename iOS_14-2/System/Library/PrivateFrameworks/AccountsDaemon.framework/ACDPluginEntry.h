/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
*/

#import <AccountsDaemon/AccountsDaemon-Structs.h>
#import <libobjc.A.dylib/ACDPluginEntryProtocol.h>

@class NSSet, NSString, NSBundle;

@interface ACDPluginEntry : NSObject <ACDPluginEntryProtocol> {

	id _principalObject;
	NSSet* _supportedAccountTypes;
	NSSet* _supportedDataclasses;
	NSString* _identifier;
	struct {
		unsigned principalObject : 1;
		unsigned supportedAccountTypes : 1;
		unsigned supportedDataclasses : 1;
		unsigned identifier : 1;
	}  _fetchedFlags;
	NSBundle* _bundle;

}

@property (nonatomic,readonly) NSBundle * bundle;                          //@synthesize bundle=_bundle - In the implementation block
@property (nonatomic,readonly) id principalObject; 
@property (nonatomic,readonly) NSSet * supportedAccountTypes; 
@property (nonatomic,readonly) NSSet * supportedDataclasses; 
@property (nonatomic,readonly) NSString * identifier; 
-(NSBundle *)bundle;
-(id)initWithBundle:(id)arg1 ;
-(id)init;
-(NSSet *)supportedDataclasses;
-(id)principalObject;
-(id)debugDescription;
-(id)description;
-(NSString *)identifier;
-(BOOL)principalObjectRespondsToSelector:(SEL)arg1 ;
-(NSSet *)supportedAccountTypes;
@end

