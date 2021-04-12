/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


@class CNMutableSaveResponse, NSMapTable, NSMutableDictionary, CNSaveRequest;

@interface CNiOSABSaveContext : NSObject {

	void* _addressBook;
	CNMutableSaveResponse* _saveResponse;
	NSMapTable* _contactIndicesByInstance;
	NSMapTable* _groupIndicesByInstance;
	NSMapTable* _containerIndicesByInstance;
	NSMutableDictionary* _abPersonsByIdentifier;
	NSMutableDictionary* _abGroupsByIdentifier;
	NSMutableDictionary* _abSourcesByIdentifier;
	NSMutableDictionary* _abAccountsByIdentifier;
	CNSaveRequest* _saveRequest;

}

@property (nonatomic,readonly) NSMapTable * contactIndicesByInstance;                   //@synthesize contactIndicesByInstance=_contactIndicesByInstance - In the implementation block
@property (nonatomic,readonly) NSMapTable * groupIndicesByInstance;                     //@synthesize groupIndicesByInstance=_groupIndicesByInstance - In the implementation block
@property (nonatomic,readonly) NSMapTable * containerIndicesByInstance;                 //@synthesize containerIndicesByInstance=_containerIndicesByInstance - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * abPersonsByIdentifier;               //@synthesize abPersonsByIdentifier=_abPersonsByIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * abGroupsByIdentifier;                //@synthesize abGroupsByIdentifier=_abGroupsByIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * abSourcesByIdentifier;               //@synthesize abSourcesByIdentifier=_abSourcesByIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * abAccountsByIdentifier;              //@synthesize abAccountsByIdentifier=_abAccountsByIdentifier - In the implementation block
@property (nonatomic,readonly) CNSaveRequest * saveRequest;                             //@synthesize saveRequest=_saveRequest - In the implementation block
@property (nonatomic,readonly) CNMutableSaveResponse * saveResponse;                    //@synthesize saveResponse=_saveResponse - In the implementation block
@property (nonatomic,readonly) void* addressBook; 
-(void)dealloc;
-(CNSaveRequest *)saveRequest;
-(void*)addressBook;
-(void)_populateSaveRequestIndexTables;
-(NSMapTable *)contactIndicesByInstance;
-(NSMapTable *)groupIndicesByInstance;
-(NSMapTable *)containerIndicesByInstance;
-(id)initWithSaveRequest:(id)arg1 response:(id)arg2 addressBook:(void*)arg3 ;
-(id)indexPathForContactInstance:(id)arg1 ;
-(id)indexPathForGroupInstance:(id)arg1 ;
-(id)indexPathForContainerInstance:(id)arg1 ;
-(NSMutableDictionary *)abPersonsByIdentifier;
-(void)setAbPersonsByIdentifier:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)abGroupsByIdentifier;
-(void)setAbGroupsByIdentifier:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)abSourcesByIdentifier;
-(void)setAbSourcesByIdentifier:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)abAccountsByIdentifier;
-(void)setAbAccountsByIdentifier:(NSMutableDictionary *)arg1 ;
-(CNMutableSaveResponse *)saveResponse;
@end

